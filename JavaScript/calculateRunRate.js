let runs = 100;
let overs = 10;
let ballInOver = 3;  // This value will always be in between 0 and 7 since there are six balls in one over

function calculate(runs, overs, ballInOver) {
    let totalOvers = overs + (ballInOver / 6) 
    return runs / totalOvers;
}

console.log(calculate(runs, overs, ballInOver).toFixed(2));