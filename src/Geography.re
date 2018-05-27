[@bs.module "react-simple-maps"]
external geographyComp : ReasonReact.reactClass = "Geography";

type geographyT = { id: string};

type fill = { fill : string };
type styles = { default: fill, hover: fill, pressed: fill};

[@bs.deriving abstract]
type jsProps = {
  style: styles,
  geography: {.id : string},
  projection: string,
};


let style = {
    default: { fill: "#666" },
    hover:   { fill: "#999" },
    pressed: { fill: "#000" },
}

let make = (~geography, ~projection, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographyComp,
    ~props=jsProps(~style, ~geography, ~projection),
    children,
  );
