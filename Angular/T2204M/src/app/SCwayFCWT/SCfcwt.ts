import {Component} from "@angular/core";
import {HttpClient,HttpParams} from "@angular/common/http";
import { ForeCastWT } from "../interface/FCwt";

@Component({
  selector: 'app-forecast',
  templateUrl: './SCfcwt.html'
})
export class ForecastweatherComponent {
  data :ForeCastWT | undefined;
  city:string="ha noi";

  constructor(private http: HttpClient) {
    this.searchwt();
  }
  searchwt(){
    console.log(this.city)
    const url = 'http://api.openweathermap.org/data/2.5/forecast';
    let params = new HttpParams();
    params = params.append("q",this.city);
    params = params.append("appid",'09a71427c59d38d6a34f89b47d75975c');
    params = params.append("units",'metric');
    this.http.get<ForeCastWT>(url,{params:params})
      .subscribe(value=>{
        this.data = value;
      })
  }
}
