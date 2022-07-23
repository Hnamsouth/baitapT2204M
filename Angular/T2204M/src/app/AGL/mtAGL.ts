import { HttpClient } from '@angular/common/http';
import { Component } from '@angular/core';
import { IScategory } from '../interface/AGL';
import { Datum, IScnt } from '../interface/AGLcnt';
import { Food, IScnt2 } from '../interface/AGLcnt2';

@Component({
  selector: 'app-mtagl',
  templateUrl: './mtAGL.html'
})
export class mtagl {
  title = 'T2204M';
  ar=["sadasd",3,34,34]
  cnt1:Food[]|undefined;
  cnt2:Food[]|undefined;

  constructor (private http:HttpClient){

    const cnt1= 'https://foodgroup.herokuapp.com/api/today-special';
    this.http.get<IScnt>(cnt1)
    .subscribe(vl1 =>{
      this.cnt1=vl1.data;
      console.log(this.cnt1);
    })
    const cnt2= 'https://foodgroup.herokuapp.com/api/category/1';
    this.http.get<IScnt2>(cnt2)
    .subscribe(vl2 =>{
      this.cnt2=vl2.data.foods;
      console.log(this.cnt2);
    })

 }
}
