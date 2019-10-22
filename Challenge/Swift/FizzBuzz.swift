func fizzBuzz(){
    for i in (1...100){
        switch true{
        case ((i % 3 == 0) && (i % 5 == 0)):
            print("Spider")
        case ((i % 3) == 0):
            print("Rat")
        case ((i % 5) == 0):
            print("Ghost")
        default:
            print(i)
        }
    }
}
fizzBuzz()
