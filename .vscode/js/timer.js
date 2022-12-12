function Stopwatch(){
    
    let starttime,endtime,reset,duration = 0;

    this.start = function() {
        if(running)
            throw new Error("stop watch is running alrady ");
        running = true;

        starttime =new Date();

    };

    this.end =function(){
        if(!running)
            throw new Error("the stopwatch is alrady stoped ");
        running=false;

        endtime=new Date();

        const seconds =(endtime.getTime() - starttime.getTime())/1000;

        duration+=seconds;

    };

    this.reset =function(){

        starttime=null;
        endtime=null;
        running=false;
        duration=0;

    };

    Object.defineProperty(this,'duration',{
        get:function() { return duration;}
    });
    

}