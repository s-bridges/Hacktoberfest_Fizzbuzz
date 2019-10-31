which = fn
    (0, 0, _) -> "Spider"
    (0, _, _) -> "Ghost"
    (_, 0, _) -> "Rat"
    (_, _, x) -> x
end

get_which = fn (x) -> which.(rem(x, 5), rem(x, 3), x) end

Enum.map(1..100, fn (n) -> IO.puts(get_which.(n)) end)