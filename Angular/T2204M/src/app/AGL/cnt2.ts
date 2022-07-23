import { Component, Input } from '@angular/core';
import { Datum } from '../interface/AGLcnt';
import { Food } from '../interface/AGLcnt2';

@Component({
  selector: 'cnt2-agl',
  templateUrl:"./cnt2.html"
})
export class Cnt2 {
  @Input()
  cnagl2!:Food;
}
