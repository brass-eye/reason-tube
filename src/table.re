let component = ReasonReact.statelessComponent("Table");

let visits: array(TableRows.visit) = [|
    { stationName: "Liverpool Street", journeys: ["2018", "2013"] },
    { stationName: "Kings Cross", journeys: ["2012", "2014"] }
  |];

let make = (_children) => {
  ...component,
  render: (_self) =>
    <table>
      <thead>
        <tr>
          <th>(ReasonReact.stringToElement("Station"))</th>
          <th>(ReasonReact.stringToElement("Visits"))</th>
        </tr>
      </thead>
      <TableRows visits/>
  </table>
};