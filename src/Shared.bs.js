// Generated by BUCKLESCRIPT VERSION 5.0.0, PLEASE EDIT WITH CARE
'use strict';


function hitSlopToJs(param) {
  switch (param.tag | 0) {
    case 0 : 
        var map = { };
        map["left"] = param[0];
        map["right"] = param[1];
        map["top"] = param[2];
        map["bottom"] = param[3];
        return map;
    case 1 : 
        var map$1 = { };
        map$1["horizontal"] = param[0];
        map$1["vertical"] = param[1];
        return map$1;
    case 2 : 
        var map$2 = { };
        map$2["left"] = 0;
        map$2["width"] = param[0];
        return map$2;
    case 3 : 
        var map$3 = { };
        map$3["right"] = 0;
        map$3["width"] = param[0];
        return map$3;
    case 4 : 
        var map$4 = { };
        map$4["top"] = 0;
        map$4["height"] = param[0];
        return map$4;
    case 5 : 
        var map$5 = { };
        map$5["bottom"] = 0;
        map$5["height"] = param[0];
        return map$5;
    
  }
}

exports.hitSlopToJs = hitSlopToJs;
/* No side effect */
