let component = ReasonReact.statelessComponent("MapComponent");

let make = _children => {
  ...component,
  render: _self =>
    <div className="Map">
      <ComposableMap>
        <ZoomableGroup>
          <Geographies geography="world-50m.json">
            (
              (geographies, p) =>
                Array.mapi((i, geography) => {
                    Js.log(i);
                      <Geography key=string_of_int(i) geography projection=p />
                    }, geographies)
            )
          </Geographies>
        </ZoomableGroup>
      </ComposableMap>
    </div>,
};
