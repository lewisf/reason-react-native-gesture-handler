[@bs.deriving abstract]
type longpressGestureEvent = {
  x: int,
  y: int,
  absoluteX: int,
  absoluteY: int,
  state: State.t,
  numberOfPointers: int,
};

module LongPressGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      ~minDurationMs: int=?,
      ~maxDist: int=?,
      // Base
      ~enabled: bool=?,
      ~shouldCancelWhenOutside: bool=?,
      ~simultaneousHandlers: array(React.Ref.domRef)=?,
      ~waitFor: array(React.Ref.domRef)=?,
      ~hitSlop: Js.Dict.t('a)=?,
      ~onGestureEvent: longpressGestureEvent => unit=?,
      ~onHandlerStateChange: longpressGestureEvent=?
    ) =>
    React.element =
    "LongPressGestureHandler";
};

let make =
    (
      ~minDist,
      ~minPointers,
      ~maxPointers,
      ~activeOffsetX,
      ~activeOffsetY,
      ~failOffsetY,
      ~failOffsetX,
      ~avgTouches,
      ~enabled,
      ~shouldCancelWhenOutside,
      ~simultaneousHandlers,
      ~waitFor,
      ~hitSlop,
      ~onGestureEvent,
      ~onHandlerStateChange,
    ) =>
  LongPressGestureHandler.make(
    ~minDist,
    ~minPointers,
    ~maxPointers,
    ~activeOffsetX,
    ~activeOffsetY,
    ~failOffsetY,
    ~failOffsetX,
    ~avgTouches,
    ~enabled,
    ~shouldCancelWhenOutside,
    ~simultaneousHandlers,
    ~waitFor,
    ~hitSlop=Shared.hitSlopToJs(hitSlop),
    ~onGestureEvent,
    ~onHandlerStateChange,
  );
