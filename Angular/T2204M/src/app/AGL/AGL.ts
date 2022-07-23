import { HttpClient } from '@angular/common/http';
import { Component, Input } from '@angular/core';
import {data1, IScategory } from '../interface/AGL';
import { IScnt } from '../interface/AGLcnt';
import { IScnt2 } from '../interface/AGLcnt2';

@Component({
  selector: 'agl-app',
 templateUrl:'./AGL.html'
})
export class AGLcpn {
  @Input()
  bars!:data1;
}
