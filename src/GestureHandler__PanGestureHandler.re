[@bs.deriving abstract]
type panGestureEvent = {
  translationX: int,
  translationY: int,
  velocityX: int,
  velocityY: int,
  x: int,
  y: int,
  absoluteX: int,
  absoluteY: int,
  state: State.t,
  numberOfPointers: int,
};

module PanGestureHandler = {
  [@react.component] [@bs.module "react-native-gesture-handler"]
  external make:
    (
      ~minDist: int=?,
      ~minPointers: int=?,
      ~maxPointers: int=?,
      ~activeOffsetX: int=?,
      ~activeOffsetY: int=?,
      ~failOffsetY: int=?,
      ~failOffsetX: int=?,
      ~avgTouches: int=?,
      // Base
      ~enabled: bool=?,
      ~shouldCancelWhenOutside: bool=?,
      ~simultaneousHandlers: array(React.Ref.domRef)=?,
      ~waitFor: array(React.Ref.domRef)=?,
      ~hitSlop: Js.Dict.t('a)=?,
      ~onGestureEvent: panGestureEvent => unit=?,
      ~onHandlerStateChange: panGestureEvent=?
    ) =>
    React.element =
    "PanGestureHandler";
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
  PanGestureHandler.make(
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
