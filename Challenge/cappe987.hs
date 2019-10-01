fizzbuzz :: Int -> String
fizzbuzz x 
  | x `mod` 15 == 0 = "Spider"
  | x `mod` 5  == 0 = "Ghost"
  | x `mod` 3  == 0 = "Rat"
  | otherwise   = show x

main :: IO ()
main = 
  mapM_ (putStrLn . fizzbuzz) [1..100]
