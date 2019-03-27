[@bs.deriving abstract]
type rotationGestureEvent = {
  rotation: int,
  velocity: int,
  focalX: int,
  focalY: int,
  state: State.t,
  numberOfPointers: int,
};

module RotationGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      // Base
      ~onGestureEvent: rotationGestureEvent => unit=?,
      ~onHandlerStateChange: rotationGestureEvent=?
    ) =>
    React.element =
    "RotationGestureHandler";
};

let make = RotationGestureHandler.make;
