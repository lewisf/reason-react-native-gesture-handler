// Generated by BUCKLESCRIPT VERSION 5.0.0, PLEASE EDIT WITH CARE
'use strict';

var Caml_option = require("bs-platform/lib/js/caml_option.js");
var ReactNativeGestureHandler = require("react-native-gesture-handler");

var ForceTouchGestureHandler = /* module */[];

function make(prim, prim$1, prim$2, prim$3, prim$4) {
  return ReactNativeGestureHandler.ForceTouchGestureHandler(prim !== undefined ? Caml_option.valFromOption(prim) : undefined, prim$1 !== undefined ? Caml_option.valFromOption(prim$1) : undefined, prim$2 !== undefined ? Caml_option.valFromOption(prim$2) : undefined, prim$3 !== undefined ? Caml_option.valFromOption(prim$3) : undefined, prim$4 !== undefined ? Caml_option.valFromOption(prim$4) : undefined);
}

exports.ForceTouchGestureHandler = ForceTouchGestureHandler;
exports.make = make;
/* react-native-gesture-handler Not a pure module */