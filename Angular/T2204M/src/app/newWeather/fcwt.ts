import { HttpClient ,HttpParams} from "@angular/common/http";
import { Component,OnInit } from "@angular/core";
import { Params } from "@angular/router";
import { AnyCatcher } from "rxjs/internal/AnyCatcher";
import { City, ForeCastWT, List } from "../interface/FCwt";

@Component({
  selector:"fc-wt",
  templateUrl:"./wt.html",
  styleUrls:["./fcwt.css"]
})
export class FCWT{
  ds:ForeCastWT|undefined;
  array:List[]|undefined;
  city:string="paris";
  location:City|undefined;
  enter(event:KeyboardEventInit){
    if(event.key=="Enter"){
      this.onSubmit();
    }
  }
  constructor(private http:HttpClient){
    this.onSubmit();
  }
  onSubmit(){
    const url = 'https://api.openweathermap.org/data/2.5/forecast';
    let params = new HttpParams();
    params =  params.append('q',this.city);
    params =  params.append('appid','09a71427c59d38d6a34f89b47d75975c');
    params =  params.append('units','metric');
    params =  params.append('lang','vi');
    this.http.get<ForeCastWT>(url,{params: params})
      .subscribe(value=>{
        this.array = value.list;
        this.ds=value;
        this.location=value.city;
        console.log(this.location)
      });
      setInterval(()=>{

      },1000)
  }


}
