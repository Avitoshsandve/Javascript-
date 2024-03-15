function project(task,prize)
{
    this.task=task;
    this.prize=prize;
    
}
project.prototype.college= function(){
        console.log('NIT Raipur ${this.task}:')
    }

let user= new project("online voting",10000);
user.college();
console.log(user);
