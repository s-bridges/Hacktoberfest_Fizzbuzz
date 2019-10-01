// F#
let fizzbuzz x = 
  match x with
  | x when x % 15 = 0 -> printfn "Spider"
  | x when x % 5  = 0 -> printfn "Ghost"
  | x when x % 3  = 0 -> printfn "Rat"
  | x -> printfn "%d" x

List.iter fizzbuzz [1..100]
