[@bs.deriving abstract]
type tapGestureEvent = {
  x: int,
  y: int,
  absoluteX: int,
  absoluteY: int,
  state: State.t,
  numberOfPointers: int,
};

module TapGestureHandler = {
  [@react.component][@bs.module "react-native-gesture-handler"]
  external make:
  (
    ~minPointers: int=?,
    ~maxDurationMs: int=?,
    ~maxDelayMs: int=?,
    ~numberOfTaps: int=?,
    ~maxDeltaX: int=?,
    ~maxDeltaY: int=?,
    ~maxDist: int=?,
    // Base
    ~enabled: bool=?,
    ~shouldCancelWhenOutside: bool=?,
    ~simultaneousHandlers: array(React.Ref.domRef)=?,
    ~waitFor: array(React.Ref.domRef)=?,
    ~hitSlop: Js.Dict.t('a)=?,
    ~onGestureEvent: (tapGestureEvent => unit)=?,
    ~onHandlerStateChange: tapGestureEvent=?,
  ) => React.element = "TapGestureHandler";
}

let make = (
    ~minPointers,
    ~maxDurationMs,
    ~maxDelayMs,
    ~numberOfTaps,
    ~maxDeltaX,
    ~maxDeltaY,
    ~maxDist,
    // Base
    ~enabled,
    ~shouldCancelWhenOutside,
    ~simultaneousHandlers,
    ~waitFor,
    ~hitSlop,
    ~onGestureEvent,
    ~onHandlerStateChange,
) => TapGestureHandler.make(
    ~minPointers,
    ~maxDurationMs,
    ~maxDelayMs,
    ~numberOfTaps,
    ~maxDeltaX,
    ~maxDeltaY,
    ~maxDist,
    // Base
    ~enabled,
    ~shouldCancelWhenOutside,
    ~simultaneousHandlers,
    ~waitFor,
    ~hitSlop=Shared.hitSlopToJs(hitSlop),
    ~onGestureEvent,
    ~onHandlerStateChange,
)
