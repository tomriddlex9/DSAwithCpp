var Anim = new function(){
    "use strict";
    var T = new function(){ //singleton
       this.id = "T -singleton";
       var items = [], len;
       this.add=function(item){
      items.push(item);
      len=items.length;
       };
       var rmIdx;
       this.rm=function(item){
      rmIdx=items.indexOf(item);
      items.splice(rmIdx,1);
      len=items.length;
       };
       var dt,ct,lt=Date.now();
       var raf = window.requestAnimationFrame || 
       window.msRequestAnimationFrame || 
       window.oRequestAnimationFrame || 
       window.mozRequestAnimationFrame || 
       window.webkitRequestAnimationFrame || 
       function(cb){setTimeout(cb,30);};
       var i,t=0;
       function ticker(){
      ct=Date.now();
      dt=ct-lt;
      t += dt;
      if(t>30){
         for(i=0;i<len;i++){
            items[i].tick(t);
         }
         t=0;
      } 
      lt=ct;
      raf(ticker);
       } 
       ticker();
    };
    this.E = {
       "ease":[ 0.25, 0.1, 0.25, 1.0 ],
       "easeIn":[ 0.42, 0.0, 1.00, 1.0 ],
       "easeOut":[ 0.00, 0.0, 0.58, 1.0 ],
       "easeInOut":[ 0.42, 0.0, 0.58, 1.0 ],
       "easeInSine":[ 0.47, 0, 0.745, 0.715 ],
       "easeOutSine":[ 0.39, 0.575, 0.565, 1 ],
       "easeInOutSine":[ 0.445, 0.05, 0.55, 0.95 ],
       "easeInQuad":[ 0.55, 0.085, 0.68, 0.53 ],
       "easeOutQuad":[ 0.25, 0.46, 0.45, 0.94 ],
       "easeInOutQuad":[ 0.455, 0.03, 0.515, 0.955 ],
       "easeInCubic":[ 0.55, 0.055, 0.675, 0.19 ],
       "easeOutCubic":[ 0.215, 0.61, 0.355, 1 ],
       "easeInOutCubic":[ 0.645, 0.045, 0.355, 1 ],
       "easeInQuart":[ 0.895, 0.03, 0.685, 0.22 ],
       "easeOutQuart":[ 0.165, 0.84, 0.44, 1 ],
       "easeInOutQuart":[ 0.77, 0, 0.175, 1 ],
       "easeInQuint":[ 0.755, 0.05, 0.855, 0.06 ],
       "easeOutQuint":[ 0.23, 1, 0.32, 1 ],
       "easeInOutQuint":[ 0.86, 0, 0.07, 1 ],
       "easeInExpo":[ 0.95, 0.05, 0.795, 0.035 ],
       "easeOutExpo":[ 0.19, 1, 0.22, 1 ],
       "easeInOutExpo":[ 1, 0, 0, 1 ],
       "easeInCirc":[ 0.6, 0.04, 0.98, 0.335 ],
       "easeOutCirc":[ 0.075, 0.82, 0.165, 1 ],
       "easeInOutCirc":[ 0.785, 0.135, 0.15, 0.86 ]
    };
    function BZC(arr, name){
       this.classname = "BezCurve";
       this.instancename = name;
       var x0,y0,cx0,cy0,   x1,y1,cx1,cy1;
       if(arr.length == 4){ //1d array of 4 elements (Easings)
      x0 = 0; y0 = 0; x1 = 1; y1 = 1;
      cx0 = arr[0];   cy0 = arr[1];
      cx1 = arr[2];   cy1 = arr[3];
       } else if(arr.length == 2){ //2d array of 2 element of 2elements
      x0 = arr[0][0];      y0 = arr[0][1]; 
      cx0 = arr[0][2];     cy0 = arr[0][3];
      x1 = arr[1][0];      y1 = arr[1][1]; 
      cx1 = arr[1][2];     cy1 = arr[1][3];
       }
       var AX,BX,CX,AY,BY,CY;
       CX = 3*(cx0-x0);      CY = 3*(cy0-y0);
       BX = 3*(cx1-cx0)-CX;  BY = 3*(cy1-cy0)-CY;
       AX = x1-x0-CX-BX;     AY = y1-y0-CY-BY;
 
       this.AX = AX; this.AY = AY;
       this.BX = BX; this.BY = BY;
       this.CX = CX; this.CY = CY;
 
       this.x0 = x0; this.y0 = y0;
 
       this.xt;
    };
    BZC.prototype.get = function(t){
       return this.gety(t); //let t be x
    };
    BZC.prototype.getx = function(t){
       return this.AX*t*t*t + this.BX*t*t + this.CX*t + this.x0;
    };
    BZC.prototype.gety = function(t){
       return this.AY*t*t*t + this.BY*t*t + this.CY*t + this.y0;
    };
 
    
    var Animator = function($n, p, u, s, f, d, t,  cb){
       this.$node = $n; this.property = p; this.unit = u;
       this.start = s; this.finish = f; this.duration = d;
       //console.log(E[t][3]);
       this.tween = new BZC([E[t][0], E[t][1], E[t][2], E[t][3]]); 
       this.callback = cb;
       this.elapsed = 0; this.current = null;
       this.span = f-s;
 
       if(p === "opacity"){
      this.$node.style[p] = s;
      this.tick = this.tick;
       } else {
      this.$node.style[p] = s + u;
      this.tick = this.tick;
       }
 
       T.add(this);
    }
    Animator.prototype.tick = function(dt){
 
       this.elapsed += dt;
       if(this.elapsed >= this.duration){
      this.$node.style[this.property] = this.end + this.unit;
      T.rm(this);
      if(this.callback) this.callback();
       } else {
      this.current = this.tween.get( this.elapsed/this.duration );
      this.$node.style[this.property] = this.start + this.current*this.span + this.unit;
       }
    };
    
    this.go = function(p1,p2){
            new Animator(
            p1.$node,
            p1.property,
            p1.unit,
            p1.start,
            p1.finish,
            p1.duration,
            p1.tween,
            p2          );
    };
 
 
 };