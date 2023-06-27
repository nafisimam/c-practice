
//let array = [1,2,4, 5, 6,8]  //5
let array = [1,2,4, 5, 6,8,9] //5

// EVEN == ARRAY LENGTH/2

// ODD == (ARRAY LENGTH - 1)/2
 
//console.log("Length of Array: " + array.length)

if(array.length % 2 == 0)
{
  console.log(array[array.length/2])
}
else{
  console.log(array[(array.length - 1)/2])
}



