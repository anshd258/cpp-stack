const { withLatestFrom } = require("rxjs");

const prompt =require("prompt-sync")();

function meow(s){
   
    
       let len=0;
       let i=s.length-1;
       while (i>=0&&s[i]===' ') {
        i--;
       }
       while(i>=0)
       {
        if(s[i]===' '){
        break;
       }
       i--;
       len++;
    }

    return len;
    

   

}

input=prompt("enter mess");
 console.log(meow(input));