let input = require('fs').readFileSync('stdin', 'utf8');
let lines = input.split('\n');

const countNumber = lines.shift();

for (let i = 0; i < countNumber; i +=1 ) {
  let primo = true;
  for (let j = 2; j < lines[i]; j +=1 ) {
    if (lines[i] % j === 0) {
      primo = false;
      break;
    }
  }
  if (primo) {
    console.log(lines[i] + " eh primo");
  } else {
    console.log(lines[i] + " nao eh primo");
  }
}
