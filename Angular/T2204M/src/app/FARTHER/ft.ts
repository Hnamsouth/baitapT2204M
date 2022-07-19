import { Component } from "@angular/core";
import { ForeCastWT } from "../interface/FCwt";
import { HttpClient ,HttpParams} from "@angular/common/http";

@Component({
  selector:"ft-cpn",
  templateUrl:"./ft.html"
})
export class ftCPN{
  data:ForeCastWT|undefined;
    city:string='ha noi';
    constructor (private http:HttpClient){
      //https://api.openweathermap.org/data/2.5/forecast?q=Hanoi,vietnam&appid=09a71427c59d38d6a34f89b47d75975c&units=metric
      const url='https://api.openweathermap.org/data/2.5/forecast?q='+this.city+',vietnam&appid=09a71427c59d38d6a34f89b47d75975c&units=metric&lang=vi'
      this.http.get<ForeCastWT>(url)
      .subscribe(value=>{
        this.data=value;
        console.log(this.data)
      })

    }
}
