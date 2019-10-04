// https://github.com/kp7742

fun main() {
    for(i in 1..100) {
        if(i % 3 == 0 && i % 5 == 0) 
    		println("Spider") 
    	else if(i % 3 == 0) 
    		println("Rat") 
    	else if(i % 5 == 0) 
    		println("Ghost")
    	else println(i)
    }
}