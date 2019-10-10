1.upto(100) do |i|
    str='Rat' if i%3==0
    str='Ghost' if i%5==0
    str='Spider' if i%15==0
    str=i.to_s if str.nil?
    puts str 
end