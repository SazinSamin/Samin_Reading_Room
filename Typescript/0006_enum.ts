// https://www.typescriptlang.org/docs/handbook/enums.html
// https://www.youtube.com/watch?v=JM-KjAq9kQY&list=PLgH5QX0i9K3rXq_1OgVmjaEJJ1akJQgPq&index=8

// numeric enum
enum flop {
    dff,
    tff,
    jkff,
    srff
}

// accessing enum in different ways
console.log(flop);
console.log(flop.jkff);
console.log(flop[0]);
console.log(flop[3]);

// string enum
enum Direction {
    Up = "Up",
    Down = "Down",
    Right = "Right",
    Left = "Left",
}

console.log(Direction.Up);
console.log(Direction.Down);

// heterogenous enum
enum HeteroExample {
    right = 0,
    wrong = "wrong"
}

console.log(HeteroExample.right);
console.log(HeteroExample.wrong);

