[@bs.deriving abstract]
type forceTouchGestureEvent = {
  force: float,
  state: State.t,
  numberOfPointers: int,
};

module ForceTouchGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      ~minForce: float=?,
      ~maxForce: float=?,
      ~feedbackOnActivation: bool=?,
      // Base
      ~onGestureEvent: forceTouchGestureEvent => unit=?,
      ~onHandlerStateChange: forceTouchGestureEvent=?
    ) =>
    React.element =
    "ForceTouchGestureHandler";
};

let make = ForceTouchGestureHandler.make;
