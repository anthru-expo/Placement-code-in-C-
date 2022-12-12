

// WE CAN CREATE OBJECT USING 2 METHODS 

// 1) 1st method 
// constructer function (for creating objects)


function Student(age){
    
    this.age=age;
    this.info = function(){
        console.log("hello");
    } 
}
let num=21;
const s1= new Student(num);


//2) 2nd method 
//using fectory function

function car(Number){
    return{
        Number,
        drive : function(){
            console.log('driving');
        }
    }
}

let car1 = car(51);
car1.Number;
car1.what = 52;
