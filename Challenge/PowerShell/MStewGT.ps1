#https://github.com/MStewGT

function Get-Fizbuzz($n) {
    foreach($i in 1..$n) {
        $s = ''
        if($i % 3 -eq 0) {
            $s = 'Rat'
            if($i % 5 -eq 0){
                $s = 'Spider'
            }
        }
        elseif($i % 5 -eq 0) {
            $s = 'Ghost'
        }

        if($s -ne '') {
            Write-Output $s
        }
        else {
            Write-Output $i
        }
    }
}

Get-Fizbuzz 100