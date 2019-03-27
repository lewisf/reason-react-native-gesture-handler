[@bs.deriving abstract]
type flingGestureEvent = {
  x: int,
  y: int,
  absoluteX: int,
  absoluteY: int,
  state: State.t,
  numberOfPointers: int,
};

module Direction = {
  // Type `int` to allow for bitwise operations
  type t = int;

  [@bs.module "react-native-gesture-handler"][@bs.scope "Directions"]
  external left: t = "LEFT";
  [@bs.module "react-native-gesture-handler"][@bs.scope "Directions"]
  external right: t = "RIGHT";
  [@bs.module "react-native-gesture-handler"][@bs.scope "Directions"]
  external up: t = "UP";
  [@bs.module "react-native-gesture-handler"][@bs.scope "Directions"]
  external down: t = "DOWN";
}


module FlingGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      ~direction: Direction.t=?,
      ~numberOfPointers: int=?,
      // Base
      ~enabled: bool=?,
      ~shouldCancelWhenOutside: bool=?,
      ~simultaneousHandlers: array(React.Ref.domRef)=?,
      ~waitFor: array(React.Ref.domRef)=?,
      ~hitSlop: Js.Dict.t('a)=?,
      ~onGestureEvent: flingGestureEvent => unit=?,
      ~onHandlerStateChange: flingGestureEvent=?
    ) =>
    React.element =
    "FlingGestureHandler";
};

let make = FlingGestureHandler.make;
