function fact(n) {
  if (n <= 1) {
    console.log(`Base case reached: fact(${n}) = 1`);
    return 1;
  } else {
    const result = n * fact(n - 1);
    console.log(`Calculating fact(${n}) = ${n} * fact(${n - 1})`);
    
    console.log(`fact(${n}) = ${result}`);
    return result;
  }
}

fact(3);
