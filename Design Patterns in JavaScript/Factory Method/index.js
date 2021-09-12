const Car = require('./Cars');
const toyCar = require('./toyCars');
const myToyCar = toyCar( 'Mitsubishi Lancer Evolution 2007', 'Street','Black');
const myCar = Car('BMW GTR3', 'Racing','White',  555);
console.log(myCar);
console.log(myToyCar);