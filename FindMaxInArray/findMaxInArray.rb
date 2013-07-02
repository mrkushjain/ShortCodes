noarr = Array.new
puts "Enter the no of elements"
n=gets
n=n.to_i
puts "Enter the numbers"
n.times do |i| 
noarr[i]=gets.to_i
end
max = noarr.max
puts max