[@bs.module "react-simple-maps"] external composableMap : ReasonReact.reactClass = "ComposableMap";

/* This is like declaring a normal ReasonReact component's `make` function, except the body is a the interop hook wrapJsForReason */
let make = (children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=composableMap,
    ~props=Js.Obj.empty(),
    children,
  );
