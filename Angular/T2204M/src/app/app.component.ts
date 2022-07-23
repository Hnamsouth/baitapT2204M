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
  title = 'T2204M';
  ar=["sadasd",3,34,34]
  data:data1[]|undefined;
  cnt1:Food[]|undefined;
  cnt2:Food[]|undefined;
  // cnt3:IScnt|undefined;

  constructor (private http:HttpClient){
    const url = 'https://foodgroup.herokuapp.com/api/menu';
    this.http.get<IScategory>(url)
    .subscribe(value =>{
      this.data=value.data
      // console.log(this.data);
    })
    const cnt1= 'https://foodgroup.herokuapp.com/api/today-special';
    this.http.get<IScnt>(cnt1)
    .subscribe(vl1 =>{
      this.cnt1=vl1.data;
      // console.log(this.cnt1);
    })
    const cnt2= 'https://foodgroup.herokuapp.com/api/category/1';
    this.http.get<IScnt2>(cnt2)
    .subscribe(vl2 =>{
      this.cnt2=vl2.data.foods;
      console.log(this.cnt2);
    })
    // const cnt3= 'https://foodgroup.herokuapp.com/api/today-special';
    // this.http.get<IScnt>(cnt3)
    // .subscribe(vl1 =>{
    //   this.cnt3=vl1;
    //   console.log(this.cnt3);
    // })
 }
}
