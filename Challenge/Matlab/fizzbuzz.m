author = 'https://github.com/JordiReinsma'
desc   = 'fizzbuzz for matlab/octave'

for n = 1 : 100
  fizzbuzz = '';
  if mod(n, 3) == 0
	  fizzbuzz = [fizzbuzz 'fizz'];
  end
  if mod(n, 5) == 0
	  fizzbuzz = [fizzbuzz 'buzz'];
  end
  if isempty(fizzbuzz)
	  disp(n)
  else
	  disp(fizzbuzz)
  end
end
