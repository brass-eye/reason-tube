/* This is the basic component. */
let component = ReasonReact.statelessComponent("Table");

let make = (~message, _children) => {
  ...component,
  render: (self) =>
    <div> (ReasonReact.stringToElement("hellllo")) </div>
};
