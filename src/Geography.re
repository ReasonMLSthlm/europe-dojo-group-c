[@bs.module "react-simple-maps"]
external geographyComp : ReasonReact.reactClass = "Geography";

type geographyT = {. id: string};

[@bs.deriving abstract]
type jsProps = {
  geography: geographyT,
  projection: string,
};

let make = (~geography, ~projection, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographyComp,
    ~props=jsProps(~geography, ~projection),
    children,
  );
