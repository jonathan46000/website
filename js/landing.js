var gone = 60;
var lasty = 0;
var scrolldone = 0; 
var opacity = 1.1;
var ylast = 0;
var ynew = 0;


function remove() {
    if(gone > 0) {
        if(gone%5) {
            opacity -= 0.02;
            document.getElementById("ll").style.opacity = opacity;
        }
        gone--;
    }
    
    else if(window.pageYOffset < window.innerHeight && !scrolldone) {
            ynew = window.pageYOffset;
            if(ynew < ylast) {
                window.scrollTo(0,ylast);
            }
            ylast = ynew;
    }

    else if(window.pageYOffset > window.outerHeight && !/Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) && !scrolldone) {
        disableScroll();
        lasty = window.pageYOffset;
        document.getElementById("landing").style.display = "none";
        var curry = window.pageYOffset;
        var newy = lasty-curry;
        window.scrollTo(0,newy);
        enableScroll();
        scrolldone = 1;
    }
    else {
    }
}

function toTop() {
    window.scrollTo(0,0);
}

var keys = {37: 1, 38: 1, 39: 1, 40: 1};

function preventDefault(e) {
  e = e || window.event;
  if (e.preventDefault)
      e.preventDefault();
  e.returnValue = false;  
}

function preventDefaultForScrollKeys(e) {
    if (keys[e.keyCode]) {
        preventDefault(e);
        return false;
    }
}

function disableScroll() {
  if (window.addEventListener) // older FF
      window.addEventListener('DOMMouseScroll', preventDefault, false);
  window.onwheel = preventDefault; // modern standard
  window.onmousewheel = document.onmousewheel = preventDefault; // older browsers, IE
  window.ontouchmove  = preventDefault; // mobile
  document.onkeydown  = preventDefaultForScrollKeys;
}

function enableScroll() {
    if (window.removeEventListener)
        window.removeEventListener('DOMMouseScroll', preventDefault, false);
    window.onmousewheel = document.onmousewheel = null; 
    window.onwheel = null; 
    window.ontouchmove = null;  
    document.onkeydown = null;  
}

