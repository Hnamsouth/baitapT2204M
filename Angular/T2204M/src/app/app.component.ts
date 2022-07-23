import { HttpClient } from '@angular/common/http';
import { Component } from '@angular/core';
import { Cnt2 } from './AGL/cnt2';
import { data1, IScategory } from './interface/AGL';
import { Datum, IScnt } from './interface/AGLcnt';
import { Food, IScnt2 } from './interface/AGLcnt2';
import { ClassCPN } from './practiceclass/weather';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  rtl=[];
  title = 'T2204M';
  ar=["sadasd",3,34,34]
  data:data1[]|undefined;
  constructor (private http:HttpClient){
    const url = 'https://foodgroup.herokuapp.com/api/menu';
    this.http.get<IScategory>(url)
    .subscribe(value =>{
      this.data=value.data
      // console.log(this.data);
    })

 }
}
