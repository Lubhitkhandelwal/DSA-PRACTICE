/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let inc = init;
    return{
    increment: function(){
        return ++inc;
    },
    decrement: function(){
        return --inc;
    },
    reset: function(){
        inc = init;
        return inc;
    }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */