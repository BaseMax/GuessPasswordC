<?php
// it's only to create many variable as spam
for($i=0; $i < 500; $i++) {
  print 'int passwordi'.$i.' = '.($i * 100).';char passwords'.$i.'[10] = {\''.($i%7 * 1).'\',\''.($i%7 +1).'\',\''.($i%7 +2).'\',\''.($i%7 +3).'\'};';
}
