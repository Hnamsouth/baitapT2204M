import { HttpClient ,HttpParams} from "@angular/common/http";
import { Component,OnInit } from "@angular/core";
import { Params } from "@angular/router";
import { ForeCastWT, List } from "../interface/FCwt";

@Component({
  selector:"fc-wt",
  templateUrl:"./wt.html",
  styleUrls:["./fcwt.css"]
})
export class FCWT{
  data:ForeCastWT|undefined;
  array:List[]|undefined;
  city:string="paris";
  constructor(private http:HttpClient){

  }
  ngOnInit(){
    const url = 'https://api.openweathermap.org/data/2.5/forecast';
    let params = new HttpParams();
    params =  params.append('q',this.city);
    params =  params.append('appid','09a71427c59d38d6a34f89b47d75975c');
    params =  params.append('units','metric');
    this.http.get<ForeCastWT>(url,{params: params})
      .subscribe(value=>{
        this.array = value.list;
        console.log(this.array)
      });
  }

}
