let component = ReasonReact.reducerComponent("Table");

let visits: array(TableRows.visit) = [|
    { stationName: "Liverpool Street", journeys: ["2018", "2013"] },
    { stationName: "Kings Cross", journeys: ["2012", "2014"] }
  |];

type actions =
  | AddVisit(string);

/* type state = {
  visits: array(string)
}; */

let make = (_children) => {
  ...component,
  initialState: _state => {visits},

  reducer: (_action, _state) => ReasonReact.Update({Array.append(visits, visits)}),

  render: (_self) =>
    <table>
      <thead>
        <tr>
          <th>(ReasonReact.stringToElement("Station"))</th>
          <th>(ReasonReact.stringToElement("Visits"))</th>
        </tr>
      </thead>
      <button />
      <TableRows visits/>
  </table>
};