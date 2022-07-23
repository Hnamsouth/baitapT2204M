import { Component, Input } from '@angular/core';
import { Datum } from '../interface/AGLcnt';
import { Food } from '../interface/AGLcnt2';

@Component({
  selector: 'cnt-agl',
  templateUrl:"./cnt1.html"
})
export class Cnt1 {
  @Input()
  agl!:Food;
}
