type left = int;
type right = int;
type top = int;
type bottom = int;
type horizontal = int;
type vertical = int;
type width = int;
type height = int;
type hitSlop =
  | Rect4(left, right, top, bottom)
  | Rect2(horizontal, vertical)
  | Left(width)
  | Right(width)
  | Top(height)
  | Bottom(height);

let hitSlopToJs =
  fun
  | Rect4(left, right, top, bottom) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "left", left);
      Js.Dict.set(map, "right", right);
      Js.Dict.set(map, "top", top);
      Js.Dict.set(map, "bottom", bottom);
      map;
    }
  | Rect2(horizontal, vertical) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "horizontal", horizontal);
      Js.Dict.set(map, "vertical", vertical);
      map;
    }
  | Left(width) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "left", 0);
      Js.Dict.set(map, "width", width);
      map;
    }
  | Right(width) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "right", 0);
      Js.Dict.set(map, "width", width);
      map;
    }
  | Top(height) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "top", 0);
      Js.Dict.set(map, "height", height);
      map;
    }
  | Bottom(height) => {
      let map = Js.Dict.empty();
      Js.Dict.set(map, "bottom", 0);
      Js.Dict.set(map, "height", height);
      map;
    };
