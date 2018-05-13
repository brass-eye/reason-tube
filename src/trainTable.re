/* let visits: array(TableRows.visit) = [|
    { stationName: "Liverpool Street", journeys: ["2018", "2013"] },
    { stationName: "Kings Cross", journeys: ["2012", "2014"] },
    { stationName: "Your moter", journeys: ["2012", "2014"] }
  |]; */

let strVisits = [|"KX", "LS", "WAT"|];

type actions =
  | AddVisit(string);

type state = {
  visits: array(string)
};

let component = ReasonReact.reducerComponent("TrainTable");
let make = (_children) => {
  ...component,
  initialState: () => {visits: strVisits},

  reducer: (_action, state) => ReasonReact.Update(
    {visits: Array.append(state.visits, [|"aiden"|])}),

  render: (self) =>
    <div>
      <table>
        <thead>
          <tr>
            <th>(ReasonReact.string("Station"))</th>
            <th>(ReasonReact.string("Visits"))</th>
          </tr>
        </thead>
        /* <TableRows visits/> */
        <tbody>(
          Array.map( visit => {
            <tr>
              <td>(ReasonReact.string(visit))</td>
              <td>(ReasonReact.string(visit))</td>
            </tr>
          }, self.state.visits) |> ReasonReact.array
        )</tbody>
      </table>
      <button onClick=(_event => self.send(AddVisit("hello")))>(ReasonReact.string("button"))</button>
    </div>
};