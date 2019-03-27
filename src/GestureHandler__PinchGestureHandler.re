[@bs.deriving abstract]
type pinchGestureEvent = {
  scale: int,
  velocity: int,
  state: State.t,
  numberOfPointers: int,
};

module PinchGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      // Base
      ~onGestureEvent: pinchGestureEvent => unit=?,
      ~onHandlerStateChange: pinchGestureEvent=?
    ) =>
    React.element =
    "PinchGestureHandler";
};

let make = PinchGestureHandler.make;
