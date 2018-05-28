[@bs.module "react-simple-maps"]
external geographyComp : ReasonReact.reactClass = "Geography";

type geographyT = {.};

type fill = {fill: string};

type styleT = {
  default: fill,
  hover: fill,
  pressed: fill,
};

[@bs.deriving abstract]
type jsProps = {
  style: styleT,
  geography: geographyT,
  projection: string,
};

let style = {
  default: {
    fill: "#666",
  },
  hover: {
    fill: "#999",
  },
  pressed: {
    fill: "#000",
  },
};

let make = (~geography, ~projection, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographyComp,
    ~props=jsProps(~style, ~geography, ~projection),
    children,
  );
