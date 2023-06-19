
// let n = 5;
// let arr = [1,2,3,5];

// for(let i=0;i<n;i++){
//     if(arr[i] !== i+1){
//         console.log(i+1);
//         break;
//     }
// }

 

//  const Node = class {
//     constructor(nodeData) {
//         this.data = nodeData;
//         this.next = null;
//     }
// }


// function ReverseLL(head){
//     let current = head;
//     let prev = null;
//     let fut = null;
   
    
//        while(current != null){
//            fut = current.next;
//            current.next = prev;
//            prev = current;
//            current = fut;
//        }
//        head = prev;
//        return head;
// }

// ReverseLL(1)
 

// let n1 = 3;
// let n2 = 9;

// let min  = Math.min(n1,n2);
// let divisor = 1;
// for(let i=1;i<=n1 && i<=n2;i++){
//     if(n1%i===0 && n2%i===0){
//         divisor = i;
//     }
// }
// console.log(divisor)




let rows = 2;
let cols = 3;

let arr = new Array(cols);
let matrix = []
for(let i=0;i<rows;i++){
   matrix.push(arr)
}

for(let i=0;i<rows;i++){
    for(let k=0;k<cols;k++){
        matrix[i][k] = 1;
    }
}

console.log(matrix)