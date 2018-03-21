let component = ReasonReact.statelessComponent("TableRows");

type visit = {
  stationName: string,
  journeys: list(string)
};

let make = (~visits: array(visit), _children) => {
  ...component,
  render: (_self) => {
    <tbody>(
      Array.map( visit => {
        <tr>
          <td>(ReasonReact.stringToElement(visit.stationName))</td>
          <td>(ReasonReact.stringToElement(visit.stationName))</td>
        </tr>
      }, visits) |> ReasonReact.arrayToElement
    )</tbody>
  }
};

