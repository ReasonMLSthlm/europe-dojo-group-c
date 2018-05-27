let component = ReasonReact.statelessComponent("MapComponent");

let make = _children => {
  ...component,
  render: self =>
    <div className="Map">
      <ComposableMap>
        <ZoomableGroup>
          <Geographies geography="world-50m.json">
            (
              (geographies, p) =>
                Belt_List.map(geographies, g =>
                  <Geography key="" geography=g projection=p />
                )
            )
          </Geographies>
        </ZoomableGroup>
      </ComposableMap>
    </div>,
};
